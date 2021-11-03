#pragma once

#include "../../JObject.hpp"

namespace java::util
{
	class Locale;
}

namespace android::text
{
	class BidiFormatter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BidiFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BidiFormatter(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::BidiFormatter getInstance();
		static android::text::BidiFormatter getInstance(jboolean arg0);
		static android::text::BidiFormatter getInstance(java::util::Locale arg0);
		jboolean getStereoReset();
		jboolean isRtl(jstring arg0);
		jboolean isRtlContext();
		jstring unicodeWrap(jstring arg0);
		jstring unicodeWrap(jstring arg0, JObject arg1);
		jstring unicodeWrap(jstring arg0, jboolean arg1);
		jstring unicodeWrap(jstring arg0, JObject arg1, jboolean arg2);
	};
} // namespace android::text

