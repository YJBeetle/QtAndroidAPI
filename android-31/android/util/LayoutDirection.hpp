#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class LayoutDirection : public __JniBaseClass
	{
	public:
		// Fields
		static jint INHERIT();
		static jint LOCALE();
		static jint LTR();
		static jint RTL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LayoutDirection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LayoutDirection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

