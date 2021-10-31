#include "./AlphabeticIndex_Record.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	AlphabeticIndex_Record::AlphabeticIndex_Record(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jobject AlphabeticIndex_Record::getData()
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring AlphabeticIndex_Record::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AlphabeticIndex_Record::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

