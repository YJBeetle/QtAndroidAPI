#pragma once

#include "../../JObject.hpp"

class JString;
class JString;
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
		jboolean isRtl(JString arg0);
		jboolean isRtlContext();
		JString unicodeWrap(JString arg0);
		JString unicodeWrap(JString arg0, JObject arg1);
		JString unicodeWrap(JString arg0, jboolean arg1);
		JString unicodeWrap(JString arg0, JObject arg1, jboolean arg2);
	};
} // namespace android::text

