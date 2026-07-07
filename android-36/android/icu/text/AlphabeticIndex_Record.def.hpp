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
		AlphabeticIndex_Record(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getData() const;
		JString getName() const;
		JString toString() const;
	};
} // namespace android::icu::text

