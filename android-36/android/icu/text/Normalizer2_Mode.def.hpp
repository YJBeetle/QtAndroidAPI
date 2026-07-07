#pragma once

#include "../../../java/lang/Enum.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Normalizer2_Mode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer2_Mode(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::Normalizer2_Mode valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

