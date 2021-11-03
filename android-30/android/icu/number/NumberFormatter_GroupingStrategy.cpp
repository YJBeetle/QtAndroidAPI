#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberFormatter_GroupingStrategy.hpp"

namespace android::icu::number
{
	// Fields
	android::icu::number::NumberFormatter_GroupingStrategy NumberFormatter_GroupingStrategy::AUTO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$GroupingStrategy",
			"AUTO",
			"Landroid/icu/number/NumberFormatter$GroupingStrategy;"
		);
	}
	android::icu::number::NumberFormatter_GroupingStrategy NumberFormatter_GroupingStrategy::MIN2()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$GroupingStrategy",
			"MIN2",
			"Landroid/icu/number/NumberFormatter$GroupingStrategy;"
		);
	}
	android::icu::number::NumberFormatter_GroupingStrategy NumberFormatter_GroupingStrategy::OFF()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$GroupingStrategy",
			"OFF",
			"Landroid/icu/number/NumberFormatter$GroupingStrategy;"
		);
	}
	android::icu::number::NumberFormatter_GroupingStrategy NumberFormatter_GroupingStrategy::ON_ALIGNED()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$GroupingStrategy",
			"ON_ALIGNED",
			"Landroid/icu/number/NumberFormatter$GroupingStrategy;"
		);
	}
	android::icu::number::NumberFormatter_GroupingStrategy NumberFormatter_GroupingStrategy::THOUSANDS()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$GroupingStrategy",
			"THOUSANDS",
			"Landroid/icu/number/NumberFormatter$GroupingStrategy;"
		);
	}
	
	// QJniObject forward
	NumberFormatter_GroupingStrategy::NumberFormatter_GroupingStrategy(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::NumberFormatter_GroupingStrategy NumberFormatter_GroupingStrategy::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$GroupingStrategy",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberFormatter$GroupingStrategy;",
			arg0.object<jstring>()
		);
	}
	JArray NumberFormatter_GroupingStrategy::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$GroupingStrategy",
			"values",
			"()[Landroid/icu/number/NumberFormatter$GroupingStrategy;"
		);
	}
} // namespace android::icu::number

