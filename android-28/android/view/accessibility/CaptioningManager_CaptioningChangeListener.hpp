#pragma once

#include "../../../JObject.hpp"

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
	class CaptioningManager_CaptioningChangeListener : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaptioningManager_CaptioningChangeListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
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

