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
		
		// QJniObject forward
		template<typename ...Ts> explicit Presentation(const char *className, const char *sig, Ts...agv) : android::app::Dialog(className, sig, std::forward<Ts>(agv)...) {}
		Presentation(QJniObject obj);
		
		// Constructors
		Presentation(android::content::Context arg0, android::view::Display arg1);
		Presentation(android::content::Context arg0, android::view::Display arg1, jint arg2);
		
		// Methods
		android::view::Display getDisplay();
		android::content::res::Resources getResources();
		void onDisplayChanged();
		void onDisplayRemoved();
		void show();
	};
} // namespace android::app

