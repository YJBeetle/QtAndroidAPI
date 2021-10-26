#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHADAPTER
#define ANDROID_BLUETOOTH_BLUETOOTHADAPTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::android::bluetooth::le
{
	class BluetoothLeAdvertiser;
}
namespace __jni_impl::android::bluetooth::le
{
	class BluetoothLeScanner;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothServerSocket;
}
namespace __jni_impl::java::util
{
	class UUID;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothAdapter : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		static jstring ACTION_DISCOVERY_FINISHED();
		static jstring ACTION_DISCOVERY_STARTED();
		static jstring ACTION_LOCAL_NAME_CHANGED();
		static jstring ACTION_REQUEST_DISCOVERABLE();
		static jstring ACTION_REQUEST_ENABLE();
		static jstring ACTION_SCAN_MODE_CHANGED();
		static jstring ACTION_STATE_CHANGED();
		static jint ERROR();
		static jstring EXTRA_CONNECTION_STATE();
		static jstring EXTRA_DISCOVERABLE_DURATION();
		static jstring EXTRA_LOCAL_NAME();
		static jstring EXTRA_PREVIOUS_CONNECTION_STATE();
		static jstring EXTRA_PREVIOUS_SCAN_MODE();
		static jstring EXTRA_PREVIOUS_STATE();
		static jstring EXTRA_SCAN_MODE();
		static jstring EXTRA_STATE();
		static jint SCAN_MODE_CONNECTABLE();
		static jint SCAN_MODE_CONNECTABLE_DISCOVERABLE();
		static jint SCAN_MODE_NONE();
		static jint STATE_CONNECTED();
		static jint STATE_CONNECTING();
		static jint STATE_DISCONNECTED();
		static jint STATE_DISCONNECTING();
		static jint STATE_OFF();
		static jint STATE_ON();
		static jint STATE_TURNING_OFF();
		static jint STATE_TURNING_ON();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jboolean setName(jstring arg0);
		jboolean setName(const QString &arg0);
		jint getState();
		jstring getAddress();
		jboolean isEnabled();
		jboolean enable();
		QAndroidJniObject getRemoteDevice(jstring arg0);
		QAndroidJniObject getRemoteDevice(const QString &arg0);
		QAndroidJniObject getRemoteDevice(jbyteArray arg0);
		QAndroidJniObject getBluetoothLeAdvertiser();
		QAndroidJniObject getBluetoothLeScanner();
		jboolean disable();
		jboolean startDiscovery();
		jboolean cancelDiscovery();
		jboolean isDiscovering();
		jboolean isMultipleAdvertisementSupported();
		jboolean isOffloadedFilteringSupported();
		jboolean isOffloadedScanBatchingSupported();
		jboolean isLe2MPhySupported();
		jboolean isLeCodedPhySupported();
		jboolean isLeExtendedAdvertisingSupported();
		jboolean isLePeriodicAdvertisingSupported();
		jint getLeMaximumAdvertisingDataLength();
		QAndroidJniObject getBondedDevices();
		jint getProfileConnectionState(jint arg0);
		QAndroidJniObject listenUsingRfcommWithServiceRecord(jstring arg0, __jni_impl::java::util::UUID arg1);
		QAndroidJniObject listenUsingRfcommWithServiceRecord(const QString &arg0, __jni_impl::java::util::UUID arg1);
		QAndroidJniObject listenUsingInsecureRfcommWithServiceRecord(jstring arg0, __jni_impl::java::util::UUID arg1);
		QAndroidJniObject listenUsingInsecureRfcommWithServiceRecord(const QString &arg0, __jni_impl::java::util::UUID arg1);
		jboolean getProfileProxy(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void closeProfileProxy(jint arg0, __jni_impl::__JniBaseClass arg1);
		static jboolean checkBluetoothAddress(jstring arg0);
		static jboolean checkBluetoothAddress(const QString &arg0);
		jboolean startLeScan(__jni_impl::__JniBaseClass arg0);
		jboolean startLeScan(jarray arg0, __jni_impl::__JniBaseClass arg1);
		void stopLeScan(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject listenUsingL2capChannel();
		QAndroidJniObject listenUsingInsecureL2capChannel();
		jint getScanMode();
		static QAndroidJniObject getDefaultAdapter();
	};
} // namespace __jni_impl::android::bluetooth

#include "BluetoothDevice.hpp"
#include "le/BluetoothLeAdvertiser.hpp"
#include "le/BluetoothLeScanner.hpp"
#include "BluetoothServerSocket.hpp"
#include "../../java/util/UUID.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	jstring BluetoothAdapter::ACTION_CONNECTION_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_DISCOVERY_FINISHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_DISCOVERY_FINISHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_DISCOVERY_STARTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_DISCOVERY_STARTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_LOCAL_NAME_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_LOCAL_NAME_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_REQUEST_DISCOVERABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_REQUEST_DISCOVERABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_REQUEST_ENABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_REQUEST_ENABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_SCAN_MODE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_SCAN_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothAdapter::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"ERROR"
		);
	}
	jstring BluetoothAdapter::EXTRA_CONNECTION_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_CONNECTION_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_DISCOVERABLE_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_DISCOVERABLE_DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_LOCAL_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_LOCAL_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_PREVIOUS_CONNECTION_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_CONNECTION_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_PREVIOUS_SCAN_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_SCAN_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_PREVIOUS_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_SCAN_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_SCAN_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothAdapter::SCAN_MODE_CONNECTABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"SCAN_MODE_CONNECTABLE"
		);
	}
	jint BluetoothAdapter::SCAN_MODE_CONNECTABLE_DISCOVERABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"SCAN_MODE_CONNECTABLE_DISCOVERABLE"
		);
	}
	jint BluetoothAdapter::SCAN_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"SCAN_MODE_NONE"
		);
	}
	jint BluetoothAdapter::STATE_CONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_CONNECTED"
		);
	}
	jint BluetoothAdapter::STATE_CONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_CONNECTING"
		);
	}
	jint BluetoothAdapter::STATE_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_DISCONNECTED"
		);
	}
	jint BluetoothAdapter::STATE_DISCONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_DISCONNECTING"
		);
	}
	jint BluetoothAdapter::STATE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_OFF"
		);
	}
	jint BluetoothAdapter::STATE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_ON"
		);
	}
	jint BluetoothAdapter::STATE_TURNING_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_TURNING_OFF"
		);
	}
	jint BluetoothAdapter::STATE_TURNING_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_TURNING_ON"
		);
	}
	
	// Constructors
	void BluetoothAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothAdapter",
			"(V)V");
	}
	
	// Methods
	jstring BluetoothAdapter::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean BluetoothAdapter::setName(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setName",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean BluetoothAdapter::setName(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setName",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint BluetoothAdapter::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jstring BluetoothAdapter::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean BluetoothAdapter::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::enable()
	{
		return __thiz.callMethod<jboolean>(
			"enable",
			"()Z"
		);
	}
	QAndroidJniObject BluetoothAdapter::getRemoteDevice(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getRemoteDevice",
			"(Ljava/lang/String;)Landroid/bluetooth/BluetoothDevice;",
			arg0
		);
	}
	QAndroidJniObject BluetoothAdapter::getRemoteDevice(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getRemoteDevice",
			"(Ljava/lang/String;)Landroid/bluetooth/BluetoothDevice;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject BluetoothAdapter::getRemoteDevice(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"getRemoteDevice",
			"([B)Landroid/bluetooth/BluetoothDevice;",
			arg0
		);
	}
	QAndroidJniObject BluetoothAdapter::getBluetoothLeAdvertiser()
	{
		return __thiz.callObjectMethod(
			"getBluetoothLeAdvertiser",
			"()Landroid/bluetooth/le/BluetoothLeAdvertiser;"
		);
	}
	QAndroidJniObject BluetoothAdapter::getBluetoothLeScanner()
	{
		return __thiz.callObjectMethod(
			"getBluetoothLeScanner",
			"()Landroid/bluetooth/le/BluetoothLeScanner;"
		);
	}
	jboolean BluetoothAdapter::disable()
	{
		return __thiz.callMethod<jboolean>(
			"disable",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::startDiscovery()
	{
		return __thiz.callMethod<jboolean>(
			"startDiscovery",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::cancelDiscovery()
	{
		return __thiz.callMethod<jboolean>(
			"cancelDiscovery",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isDiscovering()
	{
		return __thiz.callMethod<jboolean>(
			"isDiscovering",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isMultipleAdvertisementSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isMultipleAdvertisementSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isOffloadedFilteringSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isOffloadedFilteringSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isOffloadedScanBatchingSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isOffloadedScanBatchingSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLe2MPhySupported()
	{
		return __thiz.callMethod<jboolean>(
			"isLe2MPhySupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLeCodedPhySupported()
	{
		return __thiz.callMethod<jboolean>(
			"isLeCodedPhySupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLeExtendedAdvertisingSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isLeExtendedAdvertisingSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLePeriodicAdvertisingSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isLePeriodicAdvertisingSupported",
			"()Z"
		);
	}
	jint BluetoothAdapter::getLeMaximumAdvertisingDataLength()
	{
		return __thiz.callMethod<jint>(
			"getLeMaximumAdvertisingDataLength",
			"()I"
		);
	}
	QAndroidJniObject BluetoothAdapter::getBondedDevices()
	{
		return __thiz.callObjectMethod(
			"getBondedDevices",
			"()Ljava/util/Set;"
		);
	}
	jint BluetoothAdapter::getProfileConnectionState(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getProfileConnectionState",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject BluetoothAdapter::listenUsingRfcommWithServiceRecord(jstring arg0, __jni_impl::java::util::UUID arg1)
	{
		return __thiz.callObjectMethod(
			"listenUsingRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothAdapter::listenUsingRfcommWithServiceRecord(const QString &arg0, __jni_impl::java::util::UUID arg1)
	{
		return __thiz.callObjectMethod(
			"listenUsingRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothAdapter::listenUsingInsecureRfcommWithServiceRecord(jstring arg0, __jni_impl::java::util::UUID arg1)
	{
		return __thiz.callObjectMethod(
			"listenUsingInsecureRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothAdapter::listenUsingInsecureRfcommWithServiceRecord(const QString &arg0, __jni_impl::java::util::UUID arg1)
	{
		return __thiz.callObjectMethod(
			"listenUsingInsecureRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean BluetoothAdapter::getProfileProxy(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"getProfileProxy",
			"(Landroid/content/Context;Landroid/bluetooth/BluetoothProfile$ServiceListener;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void BluetoothAdapter::closeProfileProxy(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"closeProfileProxy",
			"(ILandroid/bluetooth/BluetoothProfile;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean BluetoothAdapter::checkBluetoothAddress(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.bluetooth.BluetoothAdapter",
			"checkBluetoothAddress",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean BluetoothAdapter::checkBluetoothAddress(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.bluetooth.BluetoothAdapter",
			"checkBluetoothAddress",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean BluetoothAdapter::startLeScan(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"startLeScan",
			"(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothAdapter::startLeScan(jarray arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"startLeScan",
			"([Ljava/util/UUID;Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void BluetoothAdapter::stopLeScan(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"stopLeScan",
			"(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothAdapter::listenUsingL2capChannel()
	{
		return __thiz.callObjectMethod(
			"listenUsingL2capChannel",
			"()Landroid/bluetooth/BluetoothServerSocket;"
		);
	}
	QAndroidJniObject BluetoothAdapter::listenUsingInsecureL2capChannel()
	{
		return __thiz.callObjectMethod(
			"listenUsingInsecureL2capChannel",
			"()Landroid/bluetooth/BluetoothServerSocket;"
		);
	}
	jint BluetoothAdapter::getScanMode()
	{
		return __thiz.callMethod<jint>(
			"getScanMode",
			"()I"
		);
	}
	QAndroidJniObject BluetoothAdapter::getDefaultAdapter()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.bluetooth.BluetoothAdapter",
			"getDefaultAdapter",
			"()Landroid/bluetooth/BluetoothAdapter;"
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothAdapter : public __jni_impl::android::bluetooth::BluetoothAdapter
	{
	public:
		BluetoothAdapter(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothAdapter()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHADAPTER

