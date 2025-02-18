#pragma once

#include "../../JObject.hpp"

namespace dalvik::system
{
	class DexFile_OptimizationInfo;
}

namespace dalvik::system
{
	class ApplicationRuntime : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationRuntime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationRuntime(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static dalvik::system::DexFile_OptimizationInfo getBaseApkOptimizationInfo();
	};
} // namespace dalvik::system

