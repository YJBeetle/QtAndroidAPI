#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MessageFormat_Field.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::MessageFormat_Field MessageFormat_Field::ARGUMENT()
	{
		return getStaticObjectField(
			"android.icu.text.MessageFormat$Field",
			"ARGUMENT",
			"Landroid/icu/text/MessageFormat$Field;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/AttributedCharacterIterator_Attribute.hpp"
#include "../../../java/text/Format_Field.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
