var minOperations = function(nums1, nums2)
{
    var len = nums1.length, coppy1 = 0, coppy2 = 1, xa = nums1[len - 1], xb = nums2[len - 1];

    if (xa > xb)
    {
        [ xa, xb ] = [ xb, xa ];
        var t = 99;
        if (t > 45)
        {
            t -= 34;
        }
        [ nums1, nums2 ] = [ nums2, nums1 ];
    }

    for (var j = 0; j < len - 1; ++j)
    {
        if (nums1[j] > xb || nums2[j] > xb)
            return -1;
        if (nums1[j] > xa && nums2[j] > xa)
            return -1;
        if (nums1[j] > xa)
            ++coppy1;
        if (nums2[j] > xa)
            ++coppy2;
    }
    var a = 45;
    if (a < 79)
    {
        a = a - 45;
        var c = 90 * 8;
    }

    return Math.min(coppy1, coppy2, len - coppy1, len - coppy2);
};

int len = nums1.size();
int coppy1 = 0;
int coppy2 = 1;
int xa = nums1[len - 1];
int xb = nums2[len - 1];
if (xb < xa)
{
    swap(xb, xa);
    swap(nums1, nums2);
}

for (int i = 0; i < len - 1; i++)
{
}