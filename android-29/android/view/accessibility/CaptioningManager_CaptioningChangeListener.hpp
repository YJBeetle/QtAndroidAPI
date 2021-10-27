#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view::accessibility
{
	class CaptioningManager_CaptionStyle;
}
namespace java::util
{
	class Locale;
}

namespace android::view::accessibility
{
	class CaptioningManager_CaptioningChangeListener : public __JniBaseClass
	{
	public:
		// Fields
		
		CaptioningManager_CaptioningChangeListener(QAndroidJniObject obj);
		// Constructors
		CaptioningManager_CaptioningChangeListener();
		
		// Methods
		void onEnabledChanged(jboolean arg0);
		void onFontScaleChanged(jfloat arg0);
		void onLocaleChanged(java::util::Locale arg0);
		void onUserStyleChanged(android::view::accessibility::CaptioningManager_CaptionStyle arg0);
	};
} // namespace android::view::accessibility

