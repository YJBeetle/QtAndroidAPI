#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class PersistableBundle;
}
namespace android::view::inputmethod
{
	class TextAttribute;
}

namespace android::view::inputmethod
{
	class TextAttribute_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextAttribute_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextAttribute_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextAttribute_Builder();
		
		// Methods
		android::view::inputmethod::TextAttribute build() const;
		android::view::inputmethod::TextAttribute_Builder setExtras(android::os::PersistableBundle arg0) const;
		android::view::inputmethod::TextAttribute_Builder setTextConversionSuggestions(JObject arg0) const;
	};
} // namespace android::view::inputmethod

