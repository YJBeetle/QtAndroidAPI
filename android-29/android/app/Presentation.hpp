#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Dialog.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources;
}
namespace android::view
{
	class Display;
}

namespace android::app
{
	class Presentation : public android::app::Dialog
	{
	public:
		// Fields
		
		Presentation(QAndroidJniObject obj);
		// Constructors
		Presentation(android::content::Context arg0, android::view::Display arg1);
		Presentation(android::content::Context arg0, android::view::Display arg1, jint arg2);
		Presentation() = default;
		
		// Methods
		QAndroidJniObject getDisplay();
		QAndroidJniObject getResources();
		void onDisplayChanged();
		void onDisplayRemoved();
		void show();
	};
} // namespace android::app

