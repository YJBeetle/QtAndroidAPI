#include "./CompactNotation.hpp"
#include "./ScientificNotation.hpp"
#include "./SimpleNotation.hpp"
#include "./Notation.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	Notation::Notation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::CompactNotation Notation::compactLong()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"compactLong",
			"()Landroid/icu/number/CompactNotation;"
		);
	}
	android::icu::number::CompactNotation Notation::compactShort()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"compactShort",
			"()Landroid/icu/number/CompactNotation;"
		);
	}
	android::icu::number::ScientificNotation Notation::engineering()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"engineering",
			"()Landroid/icu/number/ScientificNotation;"
		);
	}
	android::icu::number::ScientificNotation Notation::scientific()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"scientific",
			"()Landroid/icu/number/ScientificNotation;"
		);
	}
	android::icu::number::SimpleNotation Notation::simple()
	{
		return callStaticObjectMethod(
			"android.icu.number.Notation",
			"simple",
			"()Landroid/icu/number/SimpleNotation;"
		);
	}
} // namespace android::icu::number

