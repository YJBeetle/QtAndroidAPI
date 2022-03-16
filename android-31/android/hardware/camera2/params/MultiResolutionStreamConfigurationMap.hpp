#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class MultiResolutionStreamConfigurationMap : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MultiResolutionStreamConfigurationMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MultiResolutionStreamConfigurationMap(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JIntArray getInputFormats() const;
		JObject getInputInfo(jint arg0) const;
		JIntArray getOutputFormats() const;
		JObject getOutputInfo(jint arg0) const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params

