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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewDebug_RecyclerTraceType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ViewDebug_RecyclerTraceType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::view

