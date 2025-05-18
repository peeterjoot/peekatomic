#include <atomic>

int load( std::atomic<int> & i32 )
{
    return i32.load();
}

int load_acq( std::atomic<int> & i32 )
{
    return i32.load( std::memory_order_acquire );
}

int load_cst( std::atomic<int> & i32 )
{
    return i32.load( std::memory_order_seq_cst );
}

void store( std::atomic<int> & i32, int v )
{
    i32.store( v );
}

void store_rel( std::atomic<int> & i32, int v )
{
    i32.store( v, std::memory_order_release );
}

void store_cst( std::atomic<int> & i32, int v )
{
    i32.store( v, std::memory_order_seq_cst );
}

int fetch_add( std::atomic<int> & i32, int v )
{
    return i32.fetch_add( v );
}

int fetch_add_rel( std::atomic<int> & i32, int v )
{
    return i32.fetch_add( v, std::memory_order_release );
}

int fetch_add_acq( std::atomic<int> & i32, int v )
{
    return i32.fetch_add( v, std::memory_order_acquire );
}

int fetch_add_cst( std::atomic<int> & i32, int v )
{
    return i32.fetch_add( v, std::memory_order_seq_cst );
}

// vim: et ts=4 sw=4
