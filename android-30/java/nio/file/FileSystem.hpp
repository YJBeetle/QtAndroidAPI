#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./attribute/UserPrincipalLookupService.def.hpp"
#include "./spi/FileSystemProvider.def.hpp"
#include "./FileSystem.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void FileSystem::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JObject FileSystem::getFileStores() const
	{
		return callObjectMethod(
			"getFileStores",
			"()Ljava/lang/Iterable;"
		);
	}
	inline JObject FileSystem::getPath(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"getPath",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline JObject FileSystem::getPathMatcher(JString arg0) const
	{
		return callObjectMethod(
			"getPathMatcher",
			"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;",
			arg0.object<jstring>()
		);
	}
	inline JObject FileSystem::getRootDirectories() const
	{
		return callObjectMethod(
			"getRootDirectories",
			"()Ljava/lang/Iterable;"
		);
	}
	inline JString FileSystem::getSeparator() const
	{
		return callObjectMethod(
			"getSeparator",
			"()Ljava/lang/String;"
		);
	}
	inline java::nio::file::attribute::UserPrincipalLookupService FileSystem::getUserPrincipalLookupService() const
	{
		return callObjectMethod(
			"getUserPrincipalLookupService",
			"()Ljava/nio/file/attribute/UserPrincipalLookupService;"
		);
	}
	inline jboolean FileSystem::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	inline jboolean FileSystem::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	inline JObject FileSystem::newWatchService() const
	{
		return callObjectMethod(
			"newWatchService",
			"()Ljava/nio/file/WatchService;"
		);
	}
	inline java::nio::file::spi::FileSystemProvider FileSystem::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/file/spi/FileSystemProvider;"
		);
	}
	inline JObject FileSystem::supportedFileAttributeViews() const
	{
		return callObjectMethod(
			"supportedFileAttributeViews",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::nio::file

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
