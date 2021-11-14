#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class SparseIntArray : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SparseIntArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SparseIntArray(QAndroidJniObject obj);
		
		// Constructors
		SparseIntArray();
		SparseIntArray(jint arg0);
		
		// Methods
		void append(jint arg0, jint arg1) const;
		void clear() const;
		android::util::SparseIntArray clone() const;
		void delete_(jint arg0) const;
		jint get(jint arg0) const;
		jint get(jint arg0, jint arg1) const;
		jint indexOfKey(jint arg0) const;
		jint indexOfValue(jint arg0) const;
		jint keyAt(jint arg0) const;
		void put(jint arg0, jint arg1) const;
		void removeAt(jint arg0) const;
		jint size() const;
		JString toString() const;
		jint valueAt(jint arg0) const;
	};
} // namespace android::util

