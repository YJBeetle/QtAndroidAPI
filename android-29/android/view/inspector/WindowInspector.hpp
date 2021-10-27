#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::inspector
{
	class WindowInspector : public __JniBaseClass
	{
	public:
		// Fields
		
		WindowInspector(QAndroidJniObject obj);
		// Constructors
		WindowInspector() = default;
		
		// Methods
		static QAndroidJniObject getGlobalWindowViews();
	};
} // namespace android::view::inspector

