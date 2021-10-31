#include "./RowSetEvent.hpp"

namespace javax::sql
{
	// Fields
	
	// QJniObject forward
	RowSetEvent::RowSetEvent(QJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	RowSetEvent::RowSetEvent(__JniBaseClass arg0)
		: java::util::EventObject(
			"javax.sql.RowSetEvent",
			"(Ljavax/sql/RowSet;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace javax::sql

