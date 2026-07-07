#pragma once

#include "../../../JString.hpp"
#include "./FieldClassification_Match.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString FieldClassification_Match::getCategoryId() const
	{
		return callObjectMethod(
			"getCategoryId",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat FieldClassification_Match::getScore() const
	{
		return callMethod<jfloat>(
			"getScore",
			"()F"
		);
	}
	inline JString FieldClassification_Match::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
