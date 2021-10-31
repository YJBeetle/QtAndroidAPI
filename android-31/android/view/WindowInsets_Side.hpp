#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class WindowInsets_Side : public __JniBaseClass
	{
	public:
		// Fields
		static jint BOTTOM();
		static jint LEFT();
		static jint RIGHT();
		static jint TOP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowInsets_Side(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsets_Side(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint all();
	};
} // namespace android::view

