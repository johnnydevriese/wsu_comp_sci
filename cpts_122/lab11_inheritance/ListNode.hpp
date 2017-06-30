#include<iostream> 




template< class NODETYPE > class List;  // forward declaration
 
template<class NODETYPE>
class ListNode
{
   friend class List< NODETYPE >; // make List a friend
public:
   ListNode( const NODETYPE &newData);  // copy constructor
   NODETYPE getData() const;      // return data in the node
private:
   NODETYPE data;                 // data
   ListNode< NODETYPE > *nextPtr; // next node in the list
};	
