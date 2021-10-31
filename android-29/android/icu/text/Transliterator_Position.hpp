#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class Transliterator_Position : public __JniBaseClass
	{
	public:
		// Fields
		jint contextLimit();
		jint contextStart();
		jint limit();
		jint start();
		
		// QJniObject forward
		template<typename ...Ts> explicit Transliterator_Position(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Transliterator_Position(QJniObject obj);
		
		// Constructors
		Transliterator_Position();
		Transliterator_Position(android::icu::text::Transliterator_Position &arg0);
		Transliterator_Position(jint arg0, jint arg1, jint arg2);
		Transliterator_Position(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		void set(android::icu::text::Transliterator_Position arg0);
		jstring toString();
		void validate(jint arg0);
	};
} // namespace android::icu::text

