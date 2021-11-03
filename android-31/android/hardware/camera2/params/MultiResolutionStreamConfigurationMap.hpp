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
		
		// QJniObject forward
		template<typename ...Ts> explicit MultiResolutionStreamConfigurationMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MultiResolutionStreamConfigurationMap(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JIntArray getInputFormats();
		JObject getInputInfo(jint arg0);
		JIntArray getOutputFormats();
		JObject getOutputInfo(jint arg0);
		jint hashCode();
		JString toString();
	};
} // namespace android::hardware::camera2::params

