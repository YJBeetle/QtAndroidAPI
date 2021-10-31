#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::view
{
	class ViewDebug_RecyclerTraceType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BIND_VIEW();
		static QAndroidJniObject MOVE_FROM_ACTIVE_TO_SCRAP_HEAP();
		static QAndroidJniObject MOVE_TO_SCRAP_HEAP();
		static QAndroidJniObject NEW_VIEW();
		static QAndroidJniObject RECYCLE_FROM_ACTIVE_HEAP();
		static QAndroidJniObject RECYCLE_FROM_SCRAP_HEAP();
		
		ViewDebug_RecyclerTraceType(QAndroidJniObject obj);
		// Constructors
		ViewDebug_RecyclerTraceType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::view

