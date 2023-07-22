#pragma once

#include "./RowSetEvent.def.hpp"

namespace javax::sql
{
	// Fields
	
	// Constructors
	inline RowSetEvent::RowSetEvent(JObject arg0)
		: java::util::EventObject(
			"javax.sql.RowSetEvent",
			"(Ljavax/sql/RowSet;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace javax::sql

// Base class headers
#include "../../java/util/EventObject.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::sql;
#endif
