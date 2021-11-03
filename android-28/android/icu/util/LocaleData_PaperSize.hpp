#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class LocaleData_PaperSize : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LocaleData_PaperSize(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocaleData_PaperSize(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getHeight();
		jint getWidth();
	};
} // namespace android::icu::util

