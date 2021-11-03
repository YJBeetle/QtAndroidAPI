#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JString;
class JString;

namespace android::text
{
	class AlteredCharSequence : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlteredCharSequence(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlteredCharSequence(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::AlteredCharSequence make(JString arg0, JCharArray arg1, jint arg2, jint arg3);
		jchar charAt(jint arg0) const;
		void getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const;
		jint length() const;
		JString subSequence(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace android::text

