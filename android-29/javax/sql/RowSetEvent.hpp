#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/util/EventObject.hpp"


namespace javax::sql
{
	class RowSetEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		RowSetEvent(QAndroidJniObject obj);
		// Constructors
		RowSetEvent(__JniBaseClass arg0);
		RowSetEvent() = default;
		
		// Methods
	};
} // namespace javax::sql

