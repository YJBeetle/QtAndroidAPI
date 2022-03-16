#pragma once

#include "../../../java/text/Format.hpp"

class JObject;
class JString;
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class ParsePosition;
}

namespace android::icu::text
{
	class SelectFormat : public java::text::Format
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SelectFormat(const char *className, const char *sig, Ts...agv) : java::text::Format(className, sig, std::forward<Ts>(agv)...) {}
		SelectFormat(QAndroidJniObject obj) : java::text::Format(obj) {}
		
		// Constructors
		SelectFormat(JString arg0);
		
		// Methods
		void applyPattern(JString arg0) const;
		jboolean equals(JObject arg0) const;
		JString format(JString arg0) const;
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const;
		jint hashCode() const;
		JObject parseObject(JString arg0, java::text::ParsePosition arg1) const;
		JString toPattern() const;
		JString toString() const;
	};
} // namespace android::icu::text

