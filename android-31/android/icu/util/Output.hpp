#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::icu::util
{
	class Output : public JObject
	{
	public:
		// Fields
		JObject value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Output(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Output(QAndroidJniObject obj);
		
		// Constructors
		Output();
		Output(JObject arg0);
		
		// Methods
		JString toString() const;
	};
} // namespace android::icu::util

