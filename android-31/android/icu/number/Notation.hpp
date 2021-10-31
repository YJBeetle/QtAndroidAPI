#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::number
{
	class CompactNotation;
}
namespace android::icu::number
{
	class ScientificNotation;
}
namespace android::icu::number
{
	class SimpleNotation;
}

namespace android::icu::number
{
	class Notation : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Notation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Notation(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::CompactNotation compactLong();
		static android::icu::number::CompactNotation compactShort();
		static android::icu::number::ScientificNotation engineering();
		static android::icu::number::ScientificNotation scientific();
		static android::icu::number::SimpleNotation simple();
	};
} // namespace android::icu::number

