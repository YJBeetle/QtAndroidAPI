#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::math
{
	class MathContext : public __JniBaseClass
	{
	public:
		// Fields
		static android::icu::math::MathContext DEFAULT();
		static jint ENGINEERING();
		static jint PLAIN();
		static jint ROUND_CEILING();
		static jint ROUND_DOWN();
		static jint ROUND_FLOOR();
		static jint ROUND_HALF_DOWN();
		static jint ROUND_HALF_EVEN();
		static jint ROUND_HALF_UP();
		static jint ROUND_UNNECESSARY();
		static jint ROUND_UP();
		static jint SCIENTIFIC();
		
		// QJniObject forward
		template<typename ...Ts> explicit MathContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MathContext(QJniObject obj);
		
		// Constructors
		MathContext(jint arg0);
		MathContext(jint arg0, jint arg1);
		MathContext(jint arg0, jint arg1, jboolean arg2);
		MathContext(jint arg0, jint arg1, jboolean arg2, jint arg3);
		
		// Methods
		jint getDigits();
		jint getForm();
		jboolean getLostDigits();
		jint getRoundingMode();
		jstring toString();
	};
} // namespace android::icu::math

