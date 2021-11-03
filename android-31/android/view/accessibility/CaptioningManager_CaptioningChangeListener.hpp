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
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptioningManager_CaptioningChangeListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptioningManager_CaptioningChangeListener(QJniObject obj);
		
		// Constructors
		CaptioningManager_CaptioningChangeListener();
		
		// Methods
		void onEnabledChanged(jboolean arg0) const;
		void onFontScaleChanged(jfloat arg0) const;
		void onLocaleChanged(java::util::Locale arg0) const;
		void onUserStyleChanged(android::view::accessibility::CaptioningManager_CaptionStyle arg0) const;
	};
} // namespace android::view::accessibility

