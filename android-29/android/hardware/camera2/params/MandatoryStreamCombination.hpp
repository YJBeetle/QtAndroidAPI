#pragma once

#include "../../../../JObject.hpp"

class JString;
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MandatoryStreamCombination(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MandatoryStreamCombination(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JString getDescription();
		JObject getStreamsInformation();
		jint hashCode();
		jboolean isReprocessable();
	};
} // namespace android::hardware::camera2::params

