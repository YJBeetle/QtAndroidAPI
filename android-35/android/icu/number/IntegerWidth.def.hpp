#pragma once

#include "../../../JObject.hpp"

namespace android::icu::number
{
	class IntegerWidth : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntegerWidth(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntegerWidth(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::number::IntegerWidth zeroFillTo(jint arg0);
		android::icu::number::IntegerWidth truncateAt(jint arg0) const;
	};
} // namespace android::icu::number

