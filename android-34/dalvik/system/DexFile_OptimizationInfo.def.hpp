#pragma once

#include "../../JObject.hpp"

namespace dalvik::system
{
	class DexFile_OptimizationInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DexFile_OptimizationInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DexFile_OptimizationInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean isFullyCompiled() const;
		jboolean isOptimized() const;
		jboolean isVerified() const;
	};
} // namespace dalvik::system

