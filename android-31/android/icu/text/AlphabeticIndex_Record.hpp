#pragma once

#include "../../../JObject.hpp"

class JString;
class JObject;
class JString;

namespace android::icu::text
{
	class AlphabeticIndex_Record : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_Record(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_Record(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getData();
		JString getName();
		JString toString();
	};
} // namespace android::icu::text

