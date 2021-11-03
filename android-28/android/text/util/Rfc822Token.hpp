#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::text::util
{
	class Rfc822Token : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Rfc822Token(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Rfc822Token(QAndroidJniObject obj);
		
		// Constructors
		Rfc822Token(JString arg0, JString arg1, JString arg2);
		
		// Methods
		static JString quoteComment(JString arg0);
		static JString quoteName(JString arg0);
		static JString quoteNameIfNecessary(JString arg0);
		jboolean equals(JObject arg0) const;
		JString getAddress() const;
		JString getComment() const;
		JString getName() const;
		jint hashCode() const;
		void setAddress(JString arg0) const;
		void setComment(JString arg0) const;
		void setName(JString arg0) const;
		JString toString() const;
	};
} // namespace android::text::util

