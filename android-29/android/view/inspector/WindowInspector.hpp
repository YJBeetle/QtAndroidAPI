#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::inspector
{
	class WindowInspector : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowInspector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowInspector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getGlobalWindowViews();
	};
} // namespace android::view::inspector

