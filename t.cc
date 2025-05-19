#include <atomic>

int x;
int y;
std::atomic<int> i32;

int load()
{
    return i32.load();
}

int load_acq()
{
    return i32.load( std::memory_order_acquire );
}

int load_cst()
{
    return i32.load( std::memory_order_seq_cst );
}

void store( int v )
{
    i32.store( v );
}

void store_rel( int v )
{
    i32.store( v, std::memory_order_release );
}

void store_cst( int v )
{
    i32.store( v, std::memory_order_seq_cst );
}

int fetch_add( int v )
{
    return i32.fetch_add( v );
}

int fetch_add_rel( int v )
{
    return i32.fetch_add( v, std::memory_order_release );
}

int fetch_add_acq( int v )
{
    return i32.fetch_add( v, std::memory_order_acquire );
}

int fetch_add_cst( int v )
{
    return i32.fetch_add( v, std::memory_order_seq_cst );
}


// vim: et ts=4 sw=4
