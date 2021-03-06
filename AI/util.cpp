#include "util.h"
#include "run.h"

namespace core {
    int player_count() {
        return detail::chopsticks.size();
    }

    int active_player_count() {
        return detail::active_player_count;
    }

    int chopstick_count() {
        return detail::chopstick_count;
    }

    int index( Player * me ) {
        auto it = detail::position.find(me);
        if( it == detail::position.end() )
            return -1;
        return it->second;
    }

    int chopsticks( int player_index ) {
        return detail::chopsticks[player_index];
    }

    int guess( int player_index ) {
        return detail::guesses[player_index];
    }

    bool valid_guess( int possible_guess ) {
        if( possible_guess < 0 || possible_guess > chopstick_count() )
            return false;
        for( auto guess: detail::guesses )
            if( guess == possible_guess )
                return false;
        return true;
    }

} // namespace core
