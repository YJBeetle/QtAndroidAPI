#include "./AlphabeticIndex_Record.hpp"

namespace android::icu::text
{
	// Fields
	
	AlphabeticIndex_Record::AlphabeticIndex_Record(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jobject AlphabeticIndex_Record::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring AlphabeticIndex_Record::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AlphabeticIndex_Record::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

