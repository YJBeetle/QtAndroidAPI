#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::icu::text
{
	class Transliterator_Position : public JObject
	{
	public:
		// Fields
		jint contextLimit();
		jint contextStart();
		jint limit();
		jint start();
		
		// QJniObject forward
		template<typename ...Ts> explicit Transliterator_Position(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Transliterator_Position(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Transliterator_Position();
		Transliterator_Position(android::icu::text::Transliterator_Position &arg0);
		Transliterator_Position(jint arg0, jint arg1, jint arg2);
		Transliterator_Position(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		void set(android::icu::text::Transliterator_Position arg0) const;
		JString toString() const;
		void validate(jint arg0) const;
	};
} // namespace android::icu::text

