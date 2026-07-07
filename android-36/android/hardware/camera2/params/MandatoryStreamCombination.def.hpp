#pragma once

#include "../../../../JObject.hpp"

class JString;
class JObject;

namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MandatoryStreamCombination(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MandatoryStreamCombination(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getDescription() const;
		JObject getStreamsInformation() const;
		jint hashCode() const;
		jboolean isReprocessable() const;
	};
} // namespace android::hardware::camera2::params

