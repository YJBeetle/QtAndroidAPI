#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::view
{
	class ViewDebug_HierarchyTraceType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BUILD_CACHE();
		static QAndroidJniObject DRAW();
		static QAndroidJniObject INVALIDATE();
		static QAndroidJniObject INVALIDATE_CHILD();
		static QAndroidJniObject INVALIDATE_CHILD_IN_PARENT();
		static QAndroidJniObject ON_LAYOUT();
		static QAndroidJniObject ON_MEASURE();
		static QAndroidJniObject REQUEST_LAYOUT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewDebug_HierarchyTraceType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ViewDebug_HierarchyTraceType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::view

