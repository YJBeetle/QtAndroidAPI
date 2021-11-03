#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class Normalizer2_Mode : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::Normalizer2_Mode COMPOSE();
		static android::icu::text::Normalizer2_Mode COMPOSE_CONTIGUOUS();
		static android::icu::text::Normalizer2_Mode DECOMPOSE();
		static android::icu::text::Normalizer2_Mode FCD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Normalizer2_Mode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer2_Mode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::Normalizer2_Mode valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

