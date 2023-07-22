#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class AlphabeticIndex_Bucket_LabelType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::AlphabeticIndex_Bucket_LabelType INFLOW();
		static android::icu::text::AlphabeticIndex_Bucket_LabelType NORMAL();
		static android::icu::text::AlphabeticIndex_Bucket_LabelType OVERFLOW();
		static android::icu::text::AlphabeticIndex_Bucket_LabelType UNDERFLOW();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_Bucket_LabelType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_Bucket_LabelType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::AlphabeticIndex_Bucket_LabelType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

