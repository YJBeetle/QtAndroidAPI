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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BidiFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BidiFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::BidiFormatter getInstance();
		static android::text::BidiFormatter getInstance(jboolean arg0);
		static android::text::BidiFormatter getInstance(java::util::Locale arg0);
		jboolean getStereoReset() const;
		jboolean isRtl(JString arg0) const;
		jboolean isRtlContext() const;
		JString unicodeWrap(JString arg0) const;
		JString unicodeWrap(JString arg0, JObject arg1) const;
		JString unicodeWrap(JString arg0, jboolean arg1) const;
		JString unicodeWrap(JString arg0, JObject arg1, jboolean arg2) const;
	};
} // namespace android::text

