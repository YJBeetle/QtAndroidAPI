#include "./RowSetEvent.hpp"

namespace javax::sql
{
	// Fields
	
	// Constructors
	RowSetEvent::RowSetEvent(JObject arg0)
		: java::util::EventObject(
			"javax.sql.RowSetEvent",
			"(Ljavax/sql/RowSet;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace javax::sql

